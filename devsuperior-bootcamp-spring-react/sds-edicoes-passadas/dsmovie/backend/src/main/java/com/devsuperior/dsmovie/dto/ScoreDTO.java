package com.devsuperior.dsmovie.dto;

import java.io.Serializable;

import com.devsuperior.dsmovie.entities.Score;

public class ScoreDTO implements Serializable {
	private static final long serialVersionUID = 1L;
	
	private Long movieId;
	private String email;
	private Double score;
	
	public ScoreDTO() {
	}

	public ScoreDTO(Long movieId, String email, Double score) {
		super();
		this.movieId = movieId;
		this.email = email;
		this.score = score;
	}
	
	public ScoreDTO(Score entity) {
		super();
		movieId = entity.getId().getMovie().getId();
		email = entity.getId().getUser().getEmail();
		score = entity.getValue();
	}

	public Long getMovieId() {
		return movieId;
	}

	public void setMovieId(Long movieId) {
		this.movieId = movieId;
	}

	public String getEmail() {
		return email;
	}

	public void setEmail(String email) {
		this.email = email;
	}

	public Double getScore() {
		return score;
	}

	public void setScore(Double score) {
		this.score = score;
	}

}
